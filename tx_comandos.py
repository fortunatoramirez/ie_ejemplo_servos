from socketIO_client import SocketIO

# Conectando al socket del Servidor
print("Conectando al Servidor...")
socketIO = SocketIO('ip.del.ser.ver',5001)
print("Conectado al Servidor.")

while True:
    comando = input('Introduzca el comando: ')
    socketIO.emit('desde_tx', comando)
