#ifndef SYSLOGPUBLISHER_H
#define SYSLOGPUBLISHER_H

#include <boost/asio.hpp>

#include "AbstractLogPublisher.h"

namespace FinTP
{
	/// publishes events to a file
	class ExportedLogObject SyslogPublisher : public AbstractLogPublisher
	{
		private :
				boost::asio::io_service m_Io_service;
				boost::asio::ip::udp::socket m_Socket;
				string m_ProgramName;

				inline int priority( unsigned int severity, unsigned int facility = 1  ) // 1 - user-level messages
				{
					return facility * 8 + severity;
				}

		public :
			explicit SyslogPublisher( const string& host, const string& port = "514", const string& programName = "QPI" );
			~SyslogPublisher() {};

			// override of base class method
			void Publish( const AppException& except );
			string formatRF3164( const string& theMessage, unsigned int severity );
	};
}

#endif //SYSLOGPUBLISHER_H