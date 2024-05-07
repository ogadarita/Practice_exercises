# Ask user for their name
name = input("What's your name? ").strip().title()

# Split user's name into first name and last name
first, last = name.split(" ")

# Greet user
print(f"hello, {first}")