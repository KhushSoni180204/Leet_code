class Solution(object):
    def generate(self, numRows):
        matrix = []
        for i in range(0,numRows):
            lst = []
            for j in range(0,i+1):
                if j==0 or j==i:
                    lst.append(1)
                else:
                    lst.append(0)
            matrix.append(lst)

        for i in range(2,numRows):
            for j in range(1,i):
                matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j]
        
        return matrix

        