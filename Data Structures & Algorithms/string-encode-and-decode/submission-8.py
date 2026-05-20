class Solution:

    def encode(self, strs: List[str]) -> str:
        
        ans = ""

        for word in strs:
            length = len(word)
            ans += str(length)
            ans += "_"
            for c in word:
                new_val = (ord(c)+3)%256
                ans += chr(new_val)
            ans += "_"
           
        print(ans)
        return ans
        
    def decode(self, s: str) -> List[str]:

        ans = []
        
        i = 0
        length = ""
        word = ""
        while i < len(s):
            while s[i] != "_":
                length += s[i]
                i+= 1

            word_length = int(length)
            length = ""
            i+=1 #move off _
            print(word_length)

            j = 0
            for j in range(word_length):
                new_val = (ord(s[i + j])-3)%256
                word += chr(new_val)

            i += word_length


            ans.append(word)
            word = ""
            i+=1 #move off _


        
        return ans
                
            
