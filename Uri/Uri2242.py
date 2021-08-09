#Uri2242

sentence = input()
vowels = ''
for letter in sentence:
    if letter in 'aeiou':
        vowels += letter
if vowels == vowels[::-1]:
    print("S")
else:
    print("N")