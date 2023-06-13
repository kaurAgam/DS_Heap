# DS_Heap
## Heap Data Structure:
The Heap is a specialized tree-based data structure that satisfies the Heap property. It is commonly used to efficiently maintain the highest (max heap) or lowest (min heap) element at the root of the tree. Heaps are often implemented using arrays due to their efficient memory usage and array-based indexing.

## Types of Heaps

There are two main types of heaps:

1. **Max Heap**: In a max heap, the value of each parent node is greater than or equal to the values of its child nodes. Thus, the maximum element is always stored at the root.
2. **Min Heap**: In a min heap, the value of each parent node is less than or equal to the values of its child nodes. Therefore, the minimum element is always stored at the root.

## Operations

The Heap data structure supports the following operations:

- **Insertion**: Add a new element to the heap while maintaining the Heap property.
- **Deletion**: Remove the root element from the heap while maintaining the Heap property.
- **Peek**: Retrieve the value of the root element without removing it from the heap.
- **Heapify**: Convert an array into a valid heap structure.
- **Heap Sort**: Sort an array using the Heap data structure.
- **Heapify Down**: Restore the Heap property by moving a node down the tree.
- **Heapify Up**: Restore the Heap property by moving a node up the tree.

## Time Complexity

The time complexity of common operations on a Heap data structure depends on the size of the heap, denoted by `n`:

- Insertion: O(log n)
- Deletion: O(log n)
- Peek: O(1)
- Heapify: O(n)
- Heap Sort: O(n log n)

## Implementation

The Heap data structure can be implemented using an array-based representation or a binary tree-based representation. Both implementations have their advantages and trade-offs. The array-based implementation is more memory-efficient, while the binary tree-based implementation provides easier traversal and manipulation of the heap.



