# Example: Implementing a min-heap using heapq
import heapq

min_heap = []
heapq.heappush(min_heap, 10)
heapq.heappush(min_heap, 30)
heapq.heappush(min_heap, 20)

print(heapq.heappop(min_heap))  # Output: 10
print(heapq.heappop(min_heap))  # Output: 20
