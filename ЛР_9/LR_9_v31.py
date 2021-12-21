import re


def text_remove(text, a, b):
    new_text = re.sub(r'[a]\w+[b]\s', "", text + " ")
    return new_text


def number_remove(text, new_text):
    return len(text.split()) - len(new_text.split())


print("Enter text: ")
text = input()
print("Enter first symbol: ")
a = input()
print("Enter last symbol: ")
b = input()
new_text = re.sub(r'[a]\w+[b]\s', "", text + " ")
print("New text: " + new_text)
print("number of remove: " + str(number_remove(text, new_text)))
