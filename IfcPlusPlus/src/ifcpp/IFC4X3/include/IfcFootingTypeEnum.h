/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcFootingTypeEnum = ENUMERATION OF	(CAISSON_FOUNDATION	,FOOTING_BEAM	,PAD_FOOTING	,PILE_CAP	,STRIP_FOOTING	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcFootingTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcFootingTypeEnumEnum
		{
			ENUM_CAISSON_FOUNDATION,
			ENUM_FOOTING_BEAM,
			ENUM_PAD_FOOTING,
			ENUM_PILE_CAP,
			ENUM_STRIP_FOOTING,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcFootingTypeEnum() = default;
		IfcFootingTypeEnum( IfcFootingTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 4155216521; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcFootingTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcFootingTypeEnumEnum m_enum;
	};
}
