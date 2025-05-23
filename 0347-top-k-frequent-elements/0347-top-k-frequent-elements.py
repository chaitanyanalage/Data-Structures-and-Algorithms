class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """

        #counting
        count = {}
        for num in nums:
            if num in count:
                count[num] += 1
            else:
                count[num] = 1
        
        #paring
        freq_pair = []
        for num in count:
            freq_pair.append((count[num], num))

        #sort
        freq_pair.sort(reverse = True)

        #top k
        result = []
        for i in range(k):
            result.append(freq_pair[i][1])
            
        return result