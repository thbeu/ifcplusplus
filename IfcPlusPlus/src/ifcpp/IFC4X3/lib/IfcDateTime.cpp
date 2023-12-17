/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcSimpleValue.h"
#include "ifcpp/IFC4X3/include/IfcDateTime.h"

// TYPE IfcDateTime = STRING;
IFC4X3::IfcDateTime::IfcDateTime( std::string value ) { m_value = value; }
void IFC4X3::IfcDateTime::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCDATETIME("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcDateTime> IFC4X3::IfcDateTime::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcDateTime>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcDateTime>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcDateTime>(); }
	shared_ptr<IfcDateTime> type_object( new IfcDateTime() );
	readString( arg, type_object->m_value );
	return type_object;
}
