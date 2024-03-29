#pragma once

namespace sequence {

	template <class T>
	struct ICollection //: IEnumerable<T>
	{
		virtual T Get(size_t index) const = 0;
		virtual size_t GetCount() const = 0;
	};

}