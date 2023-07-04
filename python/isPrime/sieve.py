import math

# sieve
def sieve(size):
    # print("type of " + str(size) + ": "+ str(type(size)))
    data = list(item for item in range(size+1))
    for n in range(2, size):
        if 2*n <= size :
            data[2*n] = 0
        else:
            break
        
    # print(data)
    # print("\n\nSieve of Erathosthenes is running!\n\n")
    sroot = int(math.sqrt(size))+1
    for number in range(3, sroot, 2):
        for multiplier in range(number, size+1, 2):
            notPrime = number*multiplier
            if notPrime <= size :
                data[notPrime] = 0
                # print(str(number) + "x" + str(multiplier) + "=" + str(number*multiplier) + ", " )
            else:
                break;
        
        # print(data)
        
    for i in range(2, size+1):
        if data[i] != 0 :
             print(str(data[i]) + " ", end=" ")

# isPrime
def isPrime(n):
    if data[n] != 0 :
        print("Prime!")
        return True
    else :
        print("Not a prrme :( ")
        return False


# call the functions
if __name__ == "__main__":
    # print("Sieve size: ")
    size = int(input("Sieve size: "))
    sieve(size)
    n = int(input("\n\nTest if Prime: "))
    # isPrime(n) # yet to be implemented

