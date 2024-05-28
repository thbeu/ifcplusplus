/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcCurveStyleFontSelect.h"
#include "ifcpp/IFC4X3/include/IfcCurveFontOrScaledCurveFontSelect.h"

// TYPE IfcCurveFontOrScaledCurveFontSelect = SELECT	(IfcCurveStyleFontAndScaling	,IfcCurveStyleFontSelect);
shared_ptr<IFC4X3::IfcCurveFontOrScaledCurveFontSelect> IFC4X3::IfcCurveFontOrScaledCurveFontSelect::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.empty() ){ return shared_ptr<IfcCurveFontOrScaledCurveFontSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcCurveFontOrScaledCurveFontSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcCurveFontOrScaledCurveFontSelect>();
	}
	shared_ptr<IfcCurveFontOrScaledCurveFontSelect> result_object;
	readSelectType( arg, result_object, "", map, errorStream, entityIdNotFound );
	return result_object;
}
