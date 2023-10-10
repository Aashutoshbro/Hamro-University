command = " "
started = False
while True:
    command=input("> ").lower()
    if command=="start":
        if started:
            print("The car is already started")
        else:
            started = True
            print("The car is started")
    elif command=="stop":
        if not started:
            print("Car is already stopped")
        else:
            started= False
            print("The car is stopped")
    elif command=="quit":
        break
    elif command=="help":
        input("""
        start -> To start the car
        stop -> To stop the car
        quit -> To quit the game
        """)
    else:
        input("Sorry, I didn't understand")
