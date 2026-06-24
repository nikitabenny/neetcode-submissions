class Solution:
    def minWindow(self, s: str, t: str) -> str:
        have = defaultdict(int)
        need = defaultdict(int)

        hCnt = 0

        ptr1 = 0
        ptr2 = 0

        res = [0] * 2
        minLen = float('inf')

        final = ""

        if len(t) > len(s):
            return ""
    
        for c in t:
            need[c] += 1
        
        nCnt = len(need)


        while ptr2 < len(s):
            
            have[s[ptr2]] += 1

            if s[ptr2] in need and have[s[ptr2]] == need[s[ptr2]]:
                hCnt += 1

            while hCnt == nCnt:
                if (ptr2 - ptr1 + 1) < minLen:
                    res[0] = ptr1
                    res[1] = ptr2
                    minLen = ptr2 - ptr1 + 1

                have[s[ptr1]] -= 1

                if s[ptr1] in need and have[s[ptr1]] == need[s[ptr1]] - 1:
                    hCnt -= 1

                ptr1 += 1

            ptr2 += 1

        if minLen == float('inf'):
            return ""

        return s[res[0]:res[1]+1]




            