class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if not s:
            return True

        temp = ''
        for char in s:
            if char.isalnum():
                temp += char.lower()
                
        left = 0
        right = len(temp) - 1
        while left < right:
            if temp[left] != temp[right]:
                return False
            left += 1
            right -= 1

        return True