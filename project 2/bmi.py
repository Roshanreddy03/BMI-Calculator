print("* BMI Calculator *")

while True:
    weight=int(input("Enter a weight: "))
    height=int(input("Enter a height: "))
    bmi = weight/(height*height)
    print(bmi)
    
    calculate = input("\nDo you want to calculate again? (y/n): ").lower()
    if calculate != "y":
        print("Thank you.")
        break
