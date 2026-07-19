from typing import List, Tuple


def sum_3_integers(triplet: List[int]) -> int:
    x1, x2, x3 = triplet
    sum_triplet=x1+x2+x3
    return sum_triplet


def compute_volume(box_dimensions: Tuple[int, int, int]) -> int:
    x1, x2, x3 = box_dimensions
    volume_box = x1*x2*x3
    return volume_box
  

# do not modify below this line
print(sum_3_integers([1, 2, 3]))
print(sum_3_integers([4, 6, 2]))

print(compute_volume((1, 2, 3)))
print(compute_volume((3, 2, 1)))
print(compute_volume((3, 9, 7)))
