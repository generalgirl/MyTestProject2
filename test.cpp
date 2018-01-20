//
////C++作业Rainbow 11月26号 星期日 15:01
////第一个问题 == == = 》
//// 实现以下类的成员方法，注意在类外部实现成员方法，注意模板的语法
//#include<iostream>
//#include<stack>
//#include<malloc.h>
//#include<assert.h>
//
//using namespace std;
//
//#define size_t int
//template<typename T>
//class Grid
//{
//public:
//	Grid(size_t inWidth = kDefaultWidth, size_t inHeight = kDefaultHeight);
//	Grid(const Grid<T>& src);
//	template<typename E>
//	Grid(const Grid<E>& src);
//	~Grid();
//	Grid& operator=(const Grid& rhs)
//	{
//		mHeight = rhs.mHeight;
//		mWidth = rhs.mWidth;
//		mNewCells = new T*[rhs.mWidth];
//		for (int i = 0; i < rhs.mWidth; ++i)
//		{
//			mCells[i] = new T[rhs.mHeight];
//			for (int j = 0; j < rhs.mHeight; ++j)
//			{
//				mCells[i][j] = rhs.mCells[i][j];
//			}
//		}
//		return *this;
//	}
//	template<typename E>
//	Grid<T>& operator=(const Grid<E>& rhs);
//	/*{
//		mHeight = rhs.mHeight;
//		mWidth = rhs.mWidth;
//		mNewCells = new T*[rhs.mWidth];
//		for (int i = 0; i < rhs.mWidth; ++i)
//		{
//			mCells[i] = new T[rhs.mHeight];
//			for (int j = 0; j < rhs.mHeight; ++j)
//			{
//				mCells[i][j] = rhs.mCells[i][j];
//			}
//		}
//		return *this;
//	}*/
//
//	void setElementAt(size_t x, size_t y, const T& inElem);
//	T& getElementAt(size_t x, size_t y);
//	const T& getElementAt(size_t x, size_t y) const;
//	size_t getHeight()const;
//	size_t getWidth()const;
//	//friend Grid& operator=(const Grid& rhs);
//private:
//	T **mCells;
//	size_t mWidth;
//	size_t mHeight;
//	static const size_t kDefaultWidth = 10;
//	static const size_t kDefaultHeight = 10;
//
//
//	template<typename E>
//	friend class Grid;
//	
//};
//
//template<typename T>
//Grid<T>::Grid(size_t inWidth = kDefaultWidth, size_t inHeight = kDefaultHeight) :mWidth(inWidth), mHeight(inHeight)
//{
//	mCells = new T*[mWidth];
//	for (int i = 0; i < mWidth; ++i)
//	{
//		mCells[i] = new T[mHeight];
//		for (int j = 0; j < mHeight; ++j)
//		{
//			mCells[i][j] = 0;
//		}
//	}
//}
//template<typename T>
//Grid<T>::Grid(const Grid<T>& src)
//{
//	mCells = new T*[src.mWidth];
//	for (int i = 0; i < src.mWidth; ++i)
//	{
//		mCells[i] = new T[src.mHeight];
//		for (int j = 0; j < src.mHeight; ++j)
//		{
//			mCells[i][j] = src.mCells[i][j];
//		}
//	}
//	mHeight = src.mHeight;
//	mWidth = src.mWidth;
//}
//template<typename T>
//Grid<T>::~Grid()
//{
//	for (int i = 0; i < mWidth; ++i)
//	{
//		delete[]mCells[i];
//	}
//	delete[]mCells;
//}
//template<typename T>
//template<typename E>
//Grid<T>::Grid(const Grid<E>& src)
//{
//	mCells = new T*[src.mWidth];
//	for (int i = 0; i < src.mWidth; ++i)
//	{
//		mCells[i] = new T[src.mHeight];
//		for (int j = 0; j < src.mHeight; ++j)
//		{
//			mCells[i][j] = src.mCells[i][j];
//		}
//	}
//	mHeight = src.mHeight;
//	mWidth = src.mWidth;
//}
//template<typename T>
//template<typename E>
// Grid<T>& Grid<T>::operator=(const Grid<E>& rhs)
//{
//	mHeight = rhs.mHeight;
//	mWidth = rhs.mWidth;
//	mNewCells = new T*[rhs.mWidth];
//	for (int i = 0; i < rhs.mWidth; ++i)
//	{
//		mCells[i] = new T[rhs.mHeight];
//		for (int j = 0; j < rhs.mHeight; ++j)
//		{
//			mCells[i][j] = rhs.mCells[i][j];
//		}
//	}
//	return *this;
//}
//template<typename T>
//void Grid<T>::setElementAt(size_t x, size_t y, const T& inElem)
//{
//	if (x <= mWidth &&y <= mHeight)
//	{
//		mCells[x][y]=inElem;
//	}
//	else
//		cout << "x ,y out of the range" << endl;
//}
//template<typename T>
//T& Grid<T>::getElementAt(size_t x, size_t y)
//{
//	if (x <= mWidth && y <= mHeight)
//	{
//		return mCells[x][y];
//	}
//	else
//	{
//		cout << "x ,y out of the range" << endl;
//		/*return NULL;*/
//	}
//}
//template<typename T>
//const T& Grid<T>::getElementAt(size_t x, size_t y) const
//{
//	if (x <= mWidth&&y <= mHeight)
//	{
//		cout << "mCells[x][y]=" << mCells[x][y] << endl;
//		return mCells[x][y];
//	}
//	cout << "x ,y out of the range" << endl;
//	return NULL;
//}
//template<typename T>
//size_t Grid<T>::getHeight()const
//{
//	return mHeight;
//}
//template<typename T>
//size_t Grid<T>::getWidth()const
//{
//	return mWidth;
//}
//
////第二个问题 == == == == 》
////3.C++的STL库有一个容器叫vector，这个容器底层的数据结构是一个内存可以自动增长的数组，每次当数组存储满了以后，内存可以自动增加两倍，初始的内存为0个位置，请完成一个模拟的vector容器的成员方法代码。
////template<typename E>
////class vector
////{
////public:
////	//默认构造函数，所有成员都给默认的零值
////	vector();
////	//num:初始元素的个数，value表示初始元素的值
////	vector(int num, E value = E());
////	//用[first, last)区间的元素初始化当前容器
////	vector(E *first, E *last);
////	//析构函数
////	~vector();
////	//拷贝构造函数
////	vector(const vector<E>&src);
////	//赋值运算符的重载函数
////	void operator=(const vector<E>&src)
////	{
////		delete[]_first;
////		_end = src._end;
////		_last = src._last;
////		_first = new E[_end];
////		memcpy(_first, src._first, sizeof(E)*_end);
////	}
////	//向容器的末尾添加新元素value，若增长内存，调用resize函数
////	void push_back(const E &value);
////	//删除容器末尾的元素
////	void pop_back();
////	//向指定位置pos插入新元素value，若增长内存，调用resize函数
////	void insert(E *pos, const E &value);
////	//删除指定位置的元素
////	void erase(E *pos);
////	//打印容器有效元素值的函数
////	void show()const;
////	//判断容器是否空
////	bool empty()const;
////	//判断容器是否满
////	bool full()const;
////	E* getpos(const E& pos)const
////	{
////		if (pos <= _last)
////		{
////			return &_first[pos];
////		}
////		else
////		{
////			cout << "pos out of range" << endl;
////			return NULL;
////		}
////	}
////private:
////	//内存增长函数，按原有容量的两倍增长
////	void resize()
////	{
////		if (full())
////		{
////			E *_first1 = new E[_end * 2];
////			memcpy(_first1, _first, sizeof(E)*_end * 2);
////			_first = _first1;
////			_end *= 2;
////		}
////	}
////	E *_first;   //存储放入容器的元素
////	int _end;	   //_element数组的总容量
////	int _last;     //_element有效元素的个数
////	static const int MAXSIZE = 20;
////};
////template<typename E>
////vector<E>::vector()
////{
////	_last = -1;
////	_end = MAXSIZE;
////	_first = new E[_end];
////}
////template<typename E>
////vector<E>::vector(int num, E value = E()) :_last(num)
////{
////	_end = MAXSIZE;
////	_first = new E[_end](value);
////}
////template<typename E>
////vector<E>::vector(E *first, E *last)
////{
////	int num = (last - first) / sizeof(E);
////	_last = num;
////	_end = MAXSIZE;
////	_first = new E[_end];
////	for (int i = 0; i < _last; ++i)
////	{
////		_first[i] = *(first + i);
////	}
////}
////template<typename E>
////vector<E>::~vector()
////{
////	delete[]_first;
////	_first = NULL;
////}
////template<typename E>
////vector<E>::vector(const vector<E>&src)
////{
////	_end = src._end;
////	_last = src._last;
////	_first = new E[_end];
////	memcpy(_first, src._first, sizeof(E)*_end);
////
////}
//////向容器的末尾添加新元素value，若增长内存，调用resize函数
////template<typename E>
////void vector<E>::push_back(const E &value)
////{
////	if (full())
////		resize();
////	_first[++_last] = value;
////}
//////删除容器末尾的元素
////template<typename E>
////void vector<E>::pop_back()
////{
////	if (!empty())
////	{
////		_last--;
////	}
////}
//////向指定位置pos插入新元素value，若增长内存，调用resize函数
////template<typename E>
////void vector<E>::insert(E *pos, const E &value)
////{
////	if (full())
////		resize();
////	int i = pos - _first;
////	if (i <= _last)
////	{
////		int j;
////		for (j = _last+1; j >i; --j)
////		{
////			_first[j] = _first[j - 1];
////		}
////		_first[j] = value;
////	}
////	else if (i == _last + 1)
////	{
////		_first[i] = value;
////	}
////	else
////	{
////		_first[++_last] = value;
////		cout << "pos is larger than last one " << endl;
////	}
////	++_last;
////}
//////删除指定位置的元素
////template<typename E>
////void vector<E>::erase(E *pos)
////{
////	assert(pos != NULL);
////	int i = pos - _first;
////	if (i < _last)
////	{
////		for (int j = i; j < _last; ++j)
////		{
////			_first[j] = _first[j + 1];
////		}
////	}
////	else
////		cout << "pos is out of range" << endl;
////}
//////打印容器有效元素值的函数
////template<typename E>
////void vector<E>::show()const
////{
////	if (!empty())
////	{
////		for (int i = 0; i < _last; ++i)
////		{
////			cout << "  " << _first[i];
////		}
////	}
////	else
////		cout << "vector is empty" << endl;
////}
//////判断容器是否空
////template<typename E>
////bool vector<E>::empty()const
////{
////	return (_last == -1);
////}
//////判断容器是否满
////template<typename E>
////bool vector<E>::full()const
////{
////	return (_last == _end-1);
////}
////void main()
////{
////	vector<int> vec;
////	vector<int> vec2 = vec;
////	vector<int> vec3;
////	int ar[5] = { 1, 2, 3, 4, 5 };
////	vec3 = vec2;
////	if (vec3.empty())
////		cout << "empty vector" << endl;
////	if (vec3.full())
////		cout << "full vector" << endl;
////	for (int i = 0; i < 20; ++i)
////	{
////		vec3.push_back(ar[i%5]);
////	}
////	vec3.push_back(ar[0]);
////	vec3.pop_back();
////	vec3.show();
////	int *p = vec3.getpos(2);
////	vec3.insert(p,100);
////	cout << endl;
////	vec3.show();
////	int *q = vec3.getpos(3);
////	vec3.insert(q, 200);
////	cout << endl;
////	vec3.show();
////	vec3.erase(q);
////	cout << endl;
////	vec3.show();
////	/*Grid<int> grid1;
////	Grid<short>  grid_short(10, 20);
////	Grid<int> grid_int = grid_short;
////	int arr[10] = { 10, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
////	for (int i = 0; i < 10; ++i)
////	{
////		for (int j = 0; j < 20; ++j)
////		{
////			grid_int.setElementAt(i, j, arr[i]);
////		}
////	}
////	int a=grid_int.getElementAt(0, 0);
////	a = grid_int.getElementAt(1, 0);
////	a = grid_int.getElementAt(2, 0);
////	a = grid_int.getElementAt(3, 0);*/
////}
