#pragma once
namespace date
{
	class Hour
	{
		protected:
			unsigned int hr;
			unsigned int min;
			unsigned int sec;

		public:
			Hour(unsigned int hr = 0, unsigned int min = 0, unsigned int sec = 0);
			void print() const;
			bool operator >(const Hour&) const;
	};
}


