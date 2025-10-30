class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        first = sorted(list(s))
        second = sorted(list(t))
        return first == second