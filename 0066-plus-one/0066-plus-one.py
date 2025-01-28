class Solution(object):
    def plusOne(self, digits):
        a = len(digits)
        for i in range(a,0,-1):
            if digits[i-1] < 9:   
                digits[i-1]+=1
                break
            else: 
                digits[i-1] = 0
        if digits[0] == 0:
            digits.insert(0,1)
        return digits
        