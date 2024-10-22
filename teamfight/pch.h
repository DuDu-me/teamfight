#pragma once

#include <iostream>
#include <stdlib.h>
#include <time.h>


#define GETTER(type, name) \
inline type Get##name() const \
{ \
	return m##name;\
}

#define SETTER(type, name) \
inline type Set##name(type _##name) \
{ \
	m##name = _##name; \
}