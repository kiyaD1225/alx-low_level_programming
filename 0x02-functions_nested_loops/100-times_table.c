                                        _putchar((z / 100) + '0');
                                        _putchar(((z / 10) % 10) + '0');
                                        _putchar((z % 10) + '0');
                                }
                                else if (z > 9)
	{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
}


