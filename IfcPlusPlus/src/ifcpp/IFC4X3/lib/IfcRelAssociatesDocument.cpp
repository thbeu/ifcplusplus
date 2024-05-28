/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcDefinitionSelect.h"
#include "ifcpp/IFC4X3/include/IfcDocumentInformation.h"
#include "ifcpp/IFC4X3/include/IfcDocumentReference.h"
#include "ifcpp/IFC4X3/include/IfcDocumentSelect.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociatesDocument.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcRelAssociatesDocument 
IFC4X3::IfcRelAssociatesDocument::IfcRelAssociatesDocument( int tag ) { m_tag = tag; }
void IFC4X3::IfcRelAssociatesDocument::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCRELASSOCIATESDOCUMENT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_RelatedObjects.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcDefinitionSelect>& type_object = m_RelatedObjects[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true, precision );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_RelatingDocument ) { m_RelatingDocument->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcRelAssociatesDocument::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRelAssociatesDocument::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){readSelectList( args[4], m_RelatedObjects, "IFCDEFINITIONSELECT", map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){m_RelatingDocument = IfcDocumentSelect::createObjectFromSTEP( args[5], map, errorStream, entityIdNotFound );}
	if( num_args != 6 ){ errorStream << "Wrong parameter count for entity IfcRelAssociatesDocument, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcRelAssociatesDocument::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcRelAssociates::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingDocument", m_RelatingDocument ) );
}
void IFC4X3::IfcRelAssociatesDocument::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcRelAssociates::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcRelAssociatesDocument::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelAssociates::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelAssociatesDocument> ptr_self = dynamic_pointer_cast<IfcRelAssociatesDocument>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelAssociatesDocument::setInverseCounterparts: type mismatch" ); }
	shared_ptr<IfcDocumentInformation>  RelatingDocument_IfcDocumentInformation = dynamic_pointer_cast<IfcDocumentInformation>( m_RelatingDocument );
	if( RelatingDocument_IfcDocumentInformation )
	{
		RelatingDocument_IfcDocumentInformation->m_DocumentInfoForObjects_inverse.emplace_back( ptr_self );
	}
	shared_ptr<IfcDocumentReference>  RelatingDocument_IfcDocumentReference = dynamic_pointer_cast<IfcDocumentReference>( m_RelatingDocument );
	if( RelatingDocument_IfcDocumentReference )
	{
		RelatingDocument_IfcDocumentReference->m_DocumentRefForObjects_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcRelAssociatesDocument::unlinkFromInverseCounterparts()
{
	IfcRelAssociates::unlinkFromInverseCounterparts();
	shared_ptr<IfcDocumentInformation>  RelatingDocument_IfcDocumentInformation = dynamic_pointer_cast<IfcDocumentInformation>( m_RelatingDocument );
	if( RelatingDocument_IfcDocumentInformation )
	{
		std::vector<weak_ptr<IfcRelAssociatesDocument> >& DocumentInfoForObjects_inverse = RelatingDocument_IfcDocumentInformation->m_DocumentInfoForObjects_inverse;
		for( auto it_DocumentInfoForObjects_inverse = DocumentInfoForObjects_inverse.begin(); it_DocumentInfoForObjects_inverse != DocumentInfoForObjects_inverse.end(); )
		{
			weak_ptr<IfcRelAssociatesDocument> self_candidate_weak = *it_DocumentInfoForObjects_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_DocumentInfoForObjects_inverse;
				continue;
			}
			shared_ptr<IfcRelAssociatesDocument> self_candidate( *it_DocumentInfoForObjects_inverse );
			if( self_candidate.get() == this )
			{
				it_DocumentInfoForObjects_inverse= DocumentInfoForObjects_inverse.erase( it_DocumentInfoForObjects_inverse );
			}
			else
			{
				++it_DocumentInfoForObjects_inverse;
			}
		}
	}
	shared_ptr<IfcDocumentReference>  RelatingDocument_IfcDocumentReference = dynamic_pointer_cast<IfcDocumentReference>( m_RelatingDocument );
	if( RelatingDocument_IfcDocumentReference )
	{
		std::vector<weak_ptr<IfcRelAssociatesDocument> >& DocumentRefForObjects_inverse = RelatingDocument_IfcDocumentReference->m_DocumentRefForObjects_inverse;
		for( auto it_DocumentRefForObjects_inverse = DocumentRefForObjects_inverse.begin(); it_DocumentRefForObjects_inverse != DocumentRefForObjects_inverse.end(); )
		{
			weak_ptr<IfcRelAssociatesDocument> self_candidate_weak = *it_DocumentRefForObjects_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_DocumentRefForObjects_inverse;
				continue;
			}
			shared_ptr<IfcRelAssociatesDocument> self_candidate( *it_DocumentRefForObjects_inverse );
			if( self_candidate.get() == this )
			{
				it_DocumentRefForObjects_inverse= DocumentRefForObjects_inverse.erase( it_DocumentRefForObjects_inverse );
			}
			else
			{
				++it_DocumentRefForObjects_inverse;
			}
		}
	}
}
