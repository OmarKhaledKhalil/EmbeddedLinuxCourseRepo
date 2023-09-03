#!/usr/bin/python3
import socket

 
#Creating server depeding on socket programming
server=socket.socket(socket.AF_INET,socket.SOCK_STREAM) #IPv4 , TCP
ip=socket.gethostbyname(socket.gethostname())


# Printing your IP

print("Your ip is : "+ip)
print("============================")

#Creating  Host
server.bind((ip,5000))
server.listen(5)

while True:
    #Recieving and Sending Messages Between Server and Clients
    client,adress=server.accept()
    rodata=client.recv(1024)
    print(f"{adress} is sending you this message {rodata.decode('UTF-8')}")
    print("============================")
    msg=str(input("Enter The Message you want to send : "))
    msg_encoded=msg.encode('UTF-8')
    client.send(msg_encoded)
    client.close()
    

