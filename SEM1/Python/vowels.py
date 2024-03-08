# Program to find the occurances of Consonents & Vowels in a given word

string = str(input("Enter a String : "))
vowelsList = ["a","e","i","o","u"]

vowel = []
consonents = []

for i in string:
    for j in vowelsList:
        if i == " ":
            break
        if i.lower() == j:
            vowel.append(i)
            break
    else:
        consonents.append(i)
        
print("\nTotal occurance of Vowels are : ",len(vowel))
print("Vowels : ",vowel)

print("\nTotal occurance of Consonents are : ",len(consonents))
print("Consonents : ",consonents)