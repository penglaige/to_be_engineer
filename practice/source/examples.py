def print_sum(x, y):
    """ print x + y.

    This function sums up two arguments and prints the result.
    The addition is done by ``+`` binary operator.

    Parameters
    ----------
    x : object
        A value to be added and printed. Must support addtion with ``y``.
    y: object
        A value to be added and printed. Must support addtion with ``x``.

    Examples
    --------
    >>> print_sum(1, 2)
    3
    >>> print_sum(-1, 2)
    1
    """
    print(x + y)
