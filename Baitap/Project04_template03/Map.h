#pragma once
template <typename K, typename V,
	template <typename T> class Container >
class Map
{
	Container <K> keys;
	Container <V> values;
public:
	Map();
	~Map();
};

