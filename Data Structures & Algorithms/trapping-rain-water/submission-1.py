class Solution:
    def trap(self, height: List[int]) -> int:
        lHigh = defaultdict(int)
        rHigh = defaultdict(int)

        maxVal = float('-inf')
        for i in range(1,len(height)-1):
            maxVal = max(maxVal,height[i-1])
            lHigh[i] = maxVal
        
        maxVal = float('-inf')
        for i in range(len(height)-2,0,-1):
            maxVal = max(maxVal,height[i+1])
            rHigh[i] = maxVal

        vol = 0
        for i in range(1,len(height)-1):
            if(min(lHigh[i],rHigh[i]) - height[i] > 0):
                vol += min(lHigh[i],rHigh[i]) - height[i]
        
        return vol