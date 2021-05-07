## Linked List
A linked list is a linear data structure which generally stores data of same type (although not necessary).

Unlike arrays, linked list elements are not stored at a contiguous location. 
Sequential elements are linked to each other using `pointers`.


### Representation of a linked list
A linked list can be visualized as a chain of elements called `nodes`. Each `node` contains two fields -- data and a next pointer.


### Advantages of linked list w.r.t arrays
* Dynamic size -> Size of an array is fixed, which means that it is necessary for you to know about the required size when declaring it (although an ArrayList mitigates this limitation of an array).
* Ease of insertion, deletion and change in order -> In an array, shifting of all elements (worst case) is required when doing insertion, deletion or when order changes.

### Drawbacks of linked list w.r.t arrays
* Random access of elements is not possible. Elements must be accessed sequentially starting from the `head` node