def maxConsecutive1(input):  
     input = bin(input)  
     input = input[2:]  
     print (max(map(len, input.split('0')))) 
# Driver program 
if __name__ == '__main__': 
    input = int(input())
    maxConsecutive1(input) 
