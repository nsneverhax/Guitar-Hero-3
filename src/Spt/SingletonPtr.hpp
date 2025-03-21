#pragma once

#include <Defines.hpp>

#include <Spt/Class.hpp>

namespace Spt
{
	template <typename T>
	class SingletonPtr : public Spt::Class
	{
	public:
		SingletonPtr(T* self)
		{
			Instance = self;
		}

		T* operator->() const;
		T& operator*() const;

		T* Instance = nullptr;
		uint32 InstanceCount = 0;
	};


	template <typename T> inline
	T* SingletonPtr<T>::operator->() const
	{
		return Instance;
	}
	template <typename T> inline
	T& SingletonPtr<T>::operator*() const
	{
		return *Instance;
	}
}