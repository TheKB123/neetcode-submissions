class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freq = set()
        for value in nums:
            if value in freq:
                return True
            freq.add(value)
        return False
        pass