print("Welcome to the program\n");
def encrypt():
    plain_text=input("Enter the text to enciphered");
    plain_text=plain_text.upper();
    plain_text_numeric=[(ord(c)-65) for c in plain_text];
    key=input("Enter the key");
    key=key.upper();
    key_numeric=[(ord(c)-65) for c in key];
    cipher_text=[];
    for i in range(0,len(plain_text_numeric),1):
        for j in range(len(key_numeric)):
            if(i+j==len(plain_text_numeric)):
                break;
            if(plain_text_numeric[i+j]==-33):
                cipher_text.insert(i+j,chr(32));
            else:
                cipher_text.insert(i+j,chr(((plain_text_numeric[i+j]+key_numeric[j])%26)+65));
    cipher=''.join(cipher_text);
    cipher=cipher.lower();
    print(cipher);
def decrypt():
    cipher_text=input("Enter the text to deciphered");
    cipher_text=cipher_text.upper();
    cipher_text_numeric=[(ord(c)-65) for c in cipher_text];
    key=input("Enter the key");
    key=key.upper();
    key_numeric=[(ord(c)-65) for c in key];
    plain_text=[];
    for i in range(0,len(cipher_text_numeric),1):
        for j in range(len(key_numeric)):
            if(i+j==len(cipher_text_numeric)):
                break;
            if(cipher_text_numeric[i+j]==-33):
                plain_text.insert(i+j,chr(32));
            else:
                plain_text.insert(i+j,chr(((cipher_text_numeric[i+j]-key_numeric[j])%26)+65));
    plain=''.join(plain_text);
    plain=plain.lower();
    print(plain);
choice=1;
while(choice):
    choice=int(input("Enter 1 to encipher\n      2 to decipher\n      0 to exit"));
    if(choice==1):
        encrypt();
    elif(choice==2):
        decrypt();
    elif(choice!=0):
        print("Enter correct choice");



