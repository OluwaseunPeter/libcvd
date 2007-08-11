#include <cvd/fast_corner.h>
#include "cvd_src/fast/prototypes.h"

namespace CVD
{
	void fast_corner_detect_10(const SubImage<byte>& i, std::vector<ImageRef>& corners, int b)
	{
		fast_corner_detect_plain_10(i, corners, b);
	}
}
