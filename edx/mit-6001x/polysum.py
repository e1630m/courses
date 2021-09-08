from math import tan, pi


def polysum(n: int, s: float) -> float:
    '''
    Returns the sum of the area and the square of the 
    perimeter of the given polygon, rounded to 4 decimals.

        Args:
            n (int): number of sides of the polygon
            s (float): the length of each side
    '''
    area = 0.25 * n * s**2 / tan(pi / n)
    peri_sqrd = (s * n)**2
    return round(area + peri_sqrd, 4)
