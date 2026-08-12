class Solution:
    def subarraySum(self, nums, k):
        freq = {0: 1}
        s = 0
        count = 0

        for x in nums:
            s += x

            if s - k in freq:
                count += freq[s - k]

            freq[s] = freq.get(s, 0) + 1

        return count
        