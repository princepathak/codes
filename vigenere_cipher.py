#Made by Prince and Shubham
#Roll no. BT17CSE019 && BT17CSE004
#Program of vigenere cipher to encryt and decrypt
print("Welcome to the program\n")
def encrypt_vigenere(plain_text,key):
    plain_text_numeric=[(ord(c)-65) for c in plain_text]
    key_numeric=[(ord(c)-65) for c in key]
    cipher_text=[]
    i=0
    while(i<len(plain_text_numeric)):
        for j in range(len(key_numeric)):
            if(i==len(plain_text_numeric)):
                i+=1
                break
            if(plain_text_numeric[i]==-33):
                cipher_text.insert(i,chr(32))
                i+=1
            else:
                cipher_text.insert(i,chr(((plain_text_numeric[i]+key_numeric[j])%26)+65))
                i+=1
    cipher=''.join(cipher_text).lower()
    print(cipher)
def decrypt_vigenere(cipher_text,key):
    cipher_text_numeric=[(ord(c)-65) for c in cipher_text]
    key_numeric=[(ord(c)-65) for c in key]
    plain_text=[]
    i=0
    while(i<len(cipher_text_numeric)):
        for j in range(len(key_numeric)):
            if(i==len(cipher_text_numeric)):
                i+=1
                break
            if(cipher_text_numeric[i]==-33):
                plain_text.insert(i,chr(32))
                i+=1
            else:
                plain_text.insert(i,chr(((cipher_text_numeric[i]-key_numeric[j])%26)+65))
                i+=1
    plain=''.join(plain_text).lower()
    print(plain)
choice=1
while(choice):
    choice=int(input("Enter 1 to encipher\n      2 to decipher\n      0 to exit\n"))
    message=input("Enter the message").upper()
    key=input("Enter the key").upper()
    if(choice==1):
        encrypt_vigenere(message,key)
    elif(choice==2):
        decrypt_vigenere(message,key)
    elif(choice!=0):
        print("Enter correct choice")



