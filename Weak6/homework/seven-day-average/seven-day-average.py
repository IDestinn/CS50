import csv
import requests
from datetime import date, timedelta


def main():
    # Read NYTimes Covid Database
    download = requests.get(
        "https://raw.githubusercontent.com/nytimes/covid-19-data/master/us-states.csv"
    )
    decoded_content = download.content.decode("utf-8")
    file = decoded_content.splitlines()
    reader = csv.DictReader(file)

    # Construct 14 day lists of new cases for each states
    new_cases = calculate(reader)

    # Create a list to store selected states
    states = []
    print("Choose one or more states to view average COVID cases.")
    print("Press enter when done.\n")

    while True:
        state = input("State: ")
        if state in new_cases:
            states.append(state)
        if len(state) == 0:
            break

    print(f"\nSeven-Day Averages")

    # Print out 7-day averages for this week vs last week
    comparative_averages(new_cases, states)


# TODO: Create a dictionary to store 14 most recent days of new cases by state
def calculate(reader):
    end_date = date.today() - timedelta(days=16)
    new_cases = {}
    for row in reader:
        if row['date'] > str(end_date):
            if row['state'] in new_cases:  
                new_cases[row['state']].append([int(row['cases']) - new_cases[row['state']][0]])
            else:
                new_cases[row['state']] = [int(row['cases'])]
    return new_cases
            

# TODO: Calculate and print out seven day average for given state
def comparative_averages(new_cases, states):
    for i in range(len(states)):
        state_cases = new_cases.get(states[i])
        state_cases.pop(0)
        print(state_cases)
        print(f"{states[i]} had a 7-day average of {avarage} and {status} of {procent}.")


main()