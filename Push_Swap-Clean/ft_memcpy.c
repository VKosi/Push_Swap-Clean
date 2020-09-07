#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	if ((!dst || dst == NULL) && (!src || src == NULL ))
		return (NULL);
	while (n-- > 0)
		*(ptr++) = *(ptr2++);
	return (dst);
}