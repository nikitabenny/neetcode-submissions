class MinStack:
    def __init__(self):
        self.myStack = []
        self.minStack = []
        self.minStack.append(float('inf'))

    def push(self, value: int) -> None:
        self.myStack.append(value)
        if value <= self.minStack[-1]:
            self.minStack.append(value)


    def pop(self) -> None:
        if self.myStack[-1] == self.minStack[-1]:
            self.minStack.pop()
        self.myStack.pop()

    def top(self) -> int:
        return self.myStack[-1] 

    def getMin(self) -> int:
        return self.minStack[-1]
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(value)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()