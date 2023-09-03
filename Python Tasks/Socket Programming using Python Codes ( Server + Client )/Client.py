#!/usr/bin/python3
import socket

 
#Creating Client depeding on socket programming
client=socket.socket(socket.AF_INET,socket.SOCK_STREAM) #IPv4 , TCP
ip=socket.gethostbyname(socket.gethostname())


#Printing Client IP

print("Your ip is : "+ip)

#Connecting to host

client.connect((ip,5000))
print("============================")

while True:
    #Recieving and Sending Messages Between Server and Clients
    
    msg=str(input("Enter The Message you want to send : "))
    msg_encoded=msg.encode('UTF-8')
    client.send(msg_encoded)
   
   
    print("============================")
    rodata=client.recv(1024)
    print(f"{ip} is sending you this message {rodata.decode('UTF-8')}")
    client.close()

