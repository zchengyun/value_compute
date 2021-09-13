#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
#include <random>
#include <vector>

int main()
{
	std::list<int> l(10);
	std::iota(l.begin(), l.end(), -4);//以-4开始每次加一
	for (auto i : l) std::cout << i << ' ';
	std::cout << std::endl;
	
	int sum = std::accumulate(l.begin(), l.end(), 0);//对一个范围内的元素求和
	std::cout <<"sum="<< sum << ' ' << std::endl;

	std::vector<int> a{ 0, 1, 2, 3, 4 };
	std::vector<int> b{ 5, 4, 2, 3, 1 };
	int r1 = std::inner_product(a.begin(), a.end(), b.begin(), 0);//求内积，0为和的初始值
	std::cout << "Inner product of a and b: " << r1 << '\n';//21

	std::vector<int> v{ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	std::adjacent_difference(v.begin(), v.end(), v.begin());//求相邻两元素之间的差
	for (auto n : v) {
		std::cout << n << ' ';
	}
	std::cout << '\n';

	std::vector<int> v2 = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 }; 
	std::partial_sum(v2.begin(), v2.end(),std::ostream_iterator<int>(std::cout, " "));//子范围中元素的部分和

}
