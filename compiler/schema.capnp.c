#include "schema.capnp.h"
/* AUTO GENERATED - DO NOT EDIT */
static const capn_text capn_val0 = {0,""};
uint16_t Field_noDiscriminant = 65535;

Node_ptr new_Node(struct capn_segment *s) {
	Node_ptr p;
	p.p = capn_new_struct(s, 40, 6);
	return p;
}
Node_list new_Node_list(struct capn_segment *s, int len) {
	Node_list p;
	p.p = capn_new_list(s, len, 40, 6);
	return p;
}
void read_Node(struct Node *s, Node_ptr p) {
	capn_resolve(&p.p);
	s->id = capn_read64(p.p, 0);
	s->displayName = capn_get_text(p.p, 0, capn_val0);
	s->displayNamePrefixLength = capn_read32(p.p, 8);
	s->scopeId = capn_read64(p.p, 16);
	s->parameters.p = capn_getp(p.p, 5, 0);
	s->isGeneric = (capn_read8(p.p, 36) & 1) != 0;
	s->nestedNodes.p = capn_getp(p.p, 1, 0);
	s->annotations.p = capn_getp(p.p, 2, 0);
	s->which = (enum Node_which)(int) capn_read16(p.p, 12);
	switch (s->which) {
	case Node__struct:
		s->_struct.dataWordCount = capn_read16(p.p, 14);
		s->_struct.pointerCount = capn_read16(p.p, 24);
		s->_struct.preferredListEncoding = (enum ElementSize)(int) capn_read16(p.p, 26);
		s->_struct.isGroup = (capn_read8(p.p, 28) & 1) != 0;
		s->_struct.discriminantCount = capn_read16(p.p, 30);
		s->_struct.discriminantOffset = capn_read32(p.p, 32);
		s->_struct.fields.p = capn_getp(p.p, 3, 0);
		break;
	case Node__enum:
		s->_enum.enumerants.p = capn_getp(p.p, 3, 0);
		break;
	case Node__interface:
		s->_interface.methods.p = capn_getp(p.p, 3, 0);
		s->_interface.superclasses.p = capn_getp(p.p, 4, 0);
		break;
	case Node__const:
		s->_const.type.p = capn_getp(p.p, 3, 0);
		s->_const.value.p = capn_getp(p.p, 4, 0);
		break;
	case Node_annotation:
		s->annotation.type.p = capn_getp(p.p, 3, 0);
		s->annotation.targetsFile = (capn_read8(p.p, 14) & 1) != 0;
		s->annotation.targetsConst = (capn_read8(p.p, 14) & 2) != 0;
		s->annotation.targetsEnum = (capn_read8(p.p, 14) & 4) != 0;
		s->annotation.targetsEnumerant = (capn_read8(p.p, 14) & 8) != 0;
		s->annotation.targetsStruct = (capn_read8(p.p, 14) & 16) != 0;
		s->annotation.targetsField = (capn_read8(p.p, 14) & 32) != 0;
		s->annotation.targetsUnion = (capn_read8(p.p, 14) & 64) != 0;
		s->annotation.targetsGroup = (capn_read8(p.p, 14) & 128) != 0;
		s->annotation.targetsInterface = (capn_read8(p.p, 15) & 1) != 0;
		s->annotation.targetsMethod = (capn_read8(p.p, 15) & 2) != 0;
		s->annotation.targetsParam = (capn_read8(p.p, 15) & 4) != 0;
		s->annotation.targetsAnnotation = (capn_read8(p.p, 15) & 8) != 0;
		break;
	default:
		break;
	}
}
void write_Node(const struct Node *s, Node_ptr p) {
	capn_resolve(&p.p);
	capn_write64(p.p, 0, s->id);
	capn_set_text(p.p, 0, s->displayName);
	capn_write32(p.p, 8, s->displayNamePrefixLength);
	capn_write64(p.p, 16, s->scopeId);
	capn_setp(p.p, 5, s->parameters.p);
	capn_write1(p.p, 288, s->isGeneric != 0);
	capn_setp(p.p, 1, s->nestedNodes.p);
	capn_setp(p.p, 2, s->annotations.p);
	capn_write16(p.p, 12, s->which);
	switch (s->which) {
	case Node__struct:
		capn_write16(p.p, 14, s->_struct.dataWordCount);
		capn_write16(p.p, 24, s->_struct.pointerCount);
		capn_write16(p.p, 26, (uint16_t) s->_struct.preferredListEncoding);
		capn_write1(p.p, 224, s->_struct.isGroup != 0);
		capn_write16(p.p, 30, s->_struct.discriminantCount);
		capn_write32(p.p, 32, s->_struct.discriminantOffset);
		capn_setp(p.p, 3, s->_struct.fields.p);
		break;
	case Node__enum:
		capn_setp(p.p, 3, s->_enum.enumerants.p);
		break;
	case Node__interface:
		capn_setp(p.p, 3, s->_interface.methods.p);
		capn_setp(p.p, 4, s->_interface.superclasses.p);
		break;
	case Node__const:
		capn_setp(p.p, 3, s->_const.type.p);
		capn_setp(p.p, 4, s->_const.value.p);
		break;
	case Node_annotation:
		capn_setp(p.p, 3, s->annotation.type.p);
		capn_write1(p.p, 112, s->annotation.targetsFile != 0);
		capn_write1(p.p, 113, s->annotation.targetsConst != 0);
		capn_write1(p.p, 114, s->annotation.targetsEnum != 0);
		capn_write1(p.p, 115, s->annotation.targetsEnumerant != 0);
		capn_write1(p.p, 116, s->annotation.targetsStruct != 0);
		capn_write1(p.p, 117, s->annotation.targetsField != 0);
		capn_write1(p.p, 118, s->annotation.targetsUnion != 0);
		capn_write1(p.p, 119, s->annotation.targetsGroup != 0);
		capn_write1(p.p, 120, s->annotation.targetsInterface != 0);
		capn_write1(p.p, 121, s->annotation.targetsMethod != 0);
		capn_write1(p.p, 122, s->annotation.targetsParam != 0);
		capn_write1(p.p, 123, s->annotation.targetsAnnotation != 0);
		break;
	default:
		break;
	}
}
void get_Node(struct Node *s, Node_list l, int i) {
	Node_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Node(s, p);
}
void set_Node(const struct Node *s, Node_list l, int i) {
	Node_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Node(s, p);
}

Node_Parameter_ptr new_Node_Parameter(struct capn_segment *s) {
	Node_Parameter_ptr p;
	p.p = capn_new_struct(s, 0, 1);
	return p;
}
Node_Parameter_list new_Node_Parameter_list(struct capn_segment *s, int len) {
	Node_Parameter_list p;
	p.p = capn_new_list(s, len, 0, 1);
	return p;
}
void read_Node_Parameter(struct Node_Parameter *s, Node_Parameter_ptr p) {
	capn_resolve(&p.p);
	s->name = capn_get_text(p.p, 0, capn_val0);
}
void write_Node_Parameter(const struct Node_Parameter *s, Node_Parameter_ptr p) {
	capn_resolve(&p.p);
	capn_set_text(p.p, 0, s->name);
}
void get_Node_Parameter(struct Node_Parameter *s, Node_Parameter_list l, int i) {
	Node_Parameter_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Node_Parameter(s, p);
}
void set_Node_Parameter(const struct Node_Parameter *s, Node_Parameter_list l, int i) {
	Node_Parameter_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Node_Parameter(s, p);
}

Node_NestedNode_ptr new_Node_NestedNode(struct capn_segment *s) {
	Node_NestedNode_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
Node_NestedNode_list new_Node_NestedNode_list(struct capn_segment *s, int len) {
	Node_NestedNode_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_Node_NestedNode(struct Node_NestedNode *s, Node_NestedNode_ptr p) {
	capn_resolve(&p.p);
	s->name = capn_get_text(p.p, 0, capn_val0);
	s->id = capn_read64(p.p, 0);
}
void write_Node_NestedNode(const struct Node_NestedNode *s, Node_NestedNode_ptr p) {
	capn_resolve(&p.p);
	capn_set_text(p.p, 0, s->name);
	capn_write64(p.p, 0, s->id);
}
void get_Node_NestedNode(struct Node_NestedNode *s, Node_NestedNode_list l, int i) {
	Node_NestedNode_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Node_NestedNode(s, p);
}
void set_Node_NestedNode(const struct Node_NestedNode *s, Node_NestedNode_list l, int i) {
	Node_NestedNode_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Node_NestedNode(s, p);
}

Field_ptr new_Field(struct capn_segment *s) {
	Field_ptr p;
	p.p = capn_new_struct(s, 24, 4);
	return p;
}
Field_list new_Field_list(struct capn_segment *s, int len) {
	Field_list p;
	p.p = capn_new_list(s, len, 24, 4);
	return p;
}
void read_Field(struct Field *s, Field_ptr p) {
	capn_resolve(&p.p);
	s->name = capn_get_text(p.p, 0, capn_val0);
	s->codeOrder = capn_read16(p.p, 0);
	s->annotations.p = capn_getp(p.p, 1, 0);
	s->discriminantValue = capn_read16(p.p, 2) ^ 65535u;
	s->which = (enum Field_which)(int) capn_read16(p.p, 8);
	switch (s->which) {
	case Field_slot:
		s->slot.offset = capn_read32(p.p, 4);
		s->slot.type.p = capn_getp(p.p, 2, 0);
		s->slot.defaultValue.p = capn_getp(p.p, 3, 0);
		s->slot.hadExplicitDefault = (capn_read8(p.p, 16) & 1) != 0;
		break;
	case Field_group:
		s->group.typeId = capn_read64(p.p, 16);
		break;
	default:
		break;
	}
	s->ordinal_which = (enum Field_ordinal_which)(int) capn_read16(p.p, 10);
	switch (s->ordinal_which) {
	case Field_ordinal__explicit:
		s->ordinal._explicit = capn_read16(p.p, 12);
		break;
	default:
		break;
	}
}
void write_Field(const struct Field *s, Field_ptr p) {
	capn_resolve(&p.p);
	capn_set_text(p.p, 0, s->name);
	capn_write16(p.p, 0, s->codeOrder);
	capn_setp(p.p, 1, s->annotations.p);
	capn_write16(p.p, 2, s->discriminantValue ^ 65535u);
	capn_write16(p.p, 8, s->which);
	switch (s->which) {
	case Field_slot:
		capn_write32(p.p, 4, s->slot.offset);
		capn_setp(p.p, 2, s->slot.type.p);
		capn_setp(p.p, 3, s->slot.defaultValue.p);
		capn_write1(p.p, 128, s->slot.hadExplicitDefault != 0);
		break;
	case Field_group:
		capn_write64(p.p, 16, s->group.typeId);
		break;
	default:
		break;
	}
	capn_write16(p.p, 10, s->ordinal_which);
	switch (s->ordinal_which) {
	case Field_ordinal__explicit:
		capn_write16(p.p, 12, s->ordinal._explicit);
		break;
	default:
		break;
	}
}
void get_Field(struct Field *s, Field_list l, int i) {
	Field_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Field(s, p);
}
void set_Field(const struct Field *s, Field_list l, int i) {
	Field_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Field(s, p);
}

Enumerant_ptr new_Enumerant(struct capn_segment *s) {
	Enumerant_ptr p;
	p.p = capn_new_struct(s, 8, 2);
	return p;
}
Enumerant_list new_Enumerant_list(struct capn_segment *s, int len) {
	Enumerant_list p;
	p.p = capn_new_list(s, len, 8, 2);
	return p;
}
void read_Enumerant(struct Enumerant *s, Enumerant_ptr p) {
	capn_resolve(&p.p);
	s->name = capn_get_text(p.p, 0, capn_val0);
	s->codeOrder = capn_read16(p.p, 0);
	s->annotations.p = capn_getp(p.p, 1, 0);
}
void write_Enumerant(const struct Enumerant *s, Enumerant_ptr p) {
	capn_resolve(&p.p);
	capn_set_text(p.p, 0, s->name);
	capn_write16(p.p, 0, s->codeOrder);
	capn_setp(p.p, 1, s->annotations.p);
}
void get_Enumerant(struct Enumerant *s, Enumerant_list l, int i) {
	Enumerant_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Enumerant(s, p);
}
void set_Enumerant(const struct Enumerant *s, Enumerant_list l, int i) {
	Enumerant_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Enumerant(s, p);
}

Superclass_ptr new_Superclass(struct capn_segment *s) {
	Superclass_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
Superclass_list new_Superclass_list(struct capn_segment *s, int len) {
	Superclass_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_Superclass(struct Superclass *s, Superclass_ptr p) {
	capn_resolve(&p.p);
	s->id = capn_read64(p.p, 0);
	s->brand.p = capn_getp(p.p, 0, 0);
}
void write_Superclass(const struct Superclass *s, Superclass_ptr p) {
	capn_resolve(&p.p);
	capn_write64(p.p, 0, s->id);
	capn_setp(p.p, 0, s->brand.p);
}
void get_Superclass(struct Superclass *s, Superclass_list l, int i) {
	Superclass_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Superclass(s, p);
}
void set_Superclass(const struct Superclass *s, Superclass_list l, int i) {
	Superclass_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Superclass(s, p);
}

Method_ptr new_Method(struct capn_segment *s) {
	Method_ptr p;
	p.p = capn_new_struct(s, 24, 5);
	return p;
}
Method_list new_Method_list(struct capn_segment *s, int len) {
	Method_list p;
	p.p = capn_new_list(s, len, 24, 5);
	return p;
}
void read_Method(struct Method *s, Method_ptr p) {
	capn_resolve(&p.p);
	s->name = capn_get_text(p.p, 0, capn_val0);
	s->codeOrder = capn_read16(p.p, 0);
	s->implicitParameters.p = capn_getp(p.p, 4, 0);
	s->paramStructType = capn_read64(p.p, 8);
	s->paramBrand.p = capn_getp(p.p, 2, 0);
	s->resultStructType = capn_read64(p.p, 16);
	s->resultBrand.p = capn_getp(p.p, 3, 0);
	s->annotations.p = capn_getp(p.p, 1, 0);
}
void write_Method(const struct Method *s, Method_ptr p) {
	capn_resolve(&p.p);
	capn_set_text(p.p, 0, s->name);
	capn_write16(p.p, 0, s->codeOrder);
	capn_setp(p.p, 4, s->implicitParameters.p);
	capn_write64(p.p, 8, s->paramStructType);
	capn_setp(p.p, 2, s->paramBrand.p);
	capn_write64(p.p, 16, s->resultStructType);
	capn_setp(p.p, 3, s->resultBrand.p);
	capn_setp(p.p, 1, s->annotations.p);
}
void get_Method(struct Method *s, Method_list l, int i) {
	Method_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Method(s, p);
}
void set_Method(const struct Method *s, Method_list l, int i) {
	Method_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Method(s, p);
}

Type_ptr new_Type(struct capn_segment *s) {
	Type_ptr p;
	p.p = capn_new_struct(s, 24, 1);
	return p;
}
Type_list new_Type_list(struct capn_segment *s, int len) {
	Type_list p;
	p.p = capn_new_list(s, len, 24, 1);
	return p;
}
void read_Type(struct Type *s, Type_ptr p) {
	capn_resolve(&p.p);
	s->which = (enum Type_which)(int) capn_read16(p.p, 0);
	switch (s->which) {
	case Type__list:
		s->_list.elementType.p = capn_getp(p.p, 0, 0);
		break;
	case Type__enum:
		s->_enum.typeId = capn_read64(p.p, 8);
		s->_enum.brand.p = capn_getp(p.p, 0, 0);
		break;
	case Type__struct:
		s->_struct.typeId = capn_read64(p.p, 8);
		s->_struct.brand.p = capn_getp(p.p, 0, 0);
		break;
	case Type__interface:
		s->_interface.typeId = capn_read64(p.p, 8);
		s->_interface.brand.p = capn_getp(p.p, 0, 0);
		break;
	case Type_anyPointer:
		s->anyPointer_which = (enum Type_anyPointer_which)(int) capn_read16(p.p, 8);
		switch (s->anyPointer_which) {
		case Type_anyPointer_parameter:
			s->anyPointer.parameter.scopeId = capn_read64(p.p, 16);
			s->anyPointer.parameter.parameterIndex = capn_read16(p.p, 10);
			break;
		case Type_anyPointer_implicitMethodParameter:
			s->anyPointer.implicitMethodParameter.parameterIndex = capn_read16(p.p, 10);
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
void write_Type(const struct Type *s, Type_ptr p) {
	capn_resolve(&p.p);
	capn_write16(p.p, 0, s->which);
	switch (s->which) {
	case Type__list:
		capn_setp(p.p, 0, s->_list.elementType.p);
		break;
	case Type__enum:
		capn_write64(p.p, 8, s->_enum.typeId);
		capn_setp(p.p, 0, s->_enum.brand.p);
		break;
	case Type__struct:
		capn_write64(p.p, 8, s->_struct.typeId);
		capn_setp(p.p, 0, s->_struct.brand.p);
		break;
	case Type__interface:
		capn_write64(p.p, 8, s->_interface.typeId);
		capn_setp(p.p, 0, s->_interface.brand.p);
		break;
	case Type_anyPointer:
		capn_write16(p.p, 8, s->anyPointer_which);
		switch (s->anyPointer_which) {
		case Type_anyPointer_parameter:
			capn_write64(p.p, 16, s->anyPointer.parameter.scopeId);
			capn_write16(p.p, 10, s->anyPointer.parameter.parameterIndex);
			break;
		case Type_anyPointer_implicitMethodParameter:
			capn_write16(p.p, 10, s->anyPointer.implicitMethodParameter.parameterIndex);
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
void get_Type(struct Type *s, Type_list l, int i) {
	Type_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Type(s, p);
}
void set_Type(const struct Type *s, Type_list l, int i) {
	Type_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Type(s, p);
}

Brand_ptr new_Brand(struct capn_segment *s) {
	Brand_ptr p;
	p.p = capn_new_struct(s, 0, 1);
	return p;
}
Brand_list new_Brand_list(struct capn_segment *s, int len) {
	Brand_list p;
	p.p = capn_new_list(s, len, 0, 1);
	return p;
}
void read_Brand(struct Brand *s, Brand_ptr p) {
	capn_resolve(&p.p);
	s->scopes.p = capn_getp(p.p, 0, 0);
}
void write_Brand(const struct Brand *s, Brand_ptr p) {
	capn_resolve(&p.p);
	capn_setp(p.p, 0, s->scopes.p);
}
void get_Brand(struct Brand *s, Brand_list l, int i) {
	Brand_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Brand(s, p);
}
void set_Brand(const struct Brand *s, Brand_list l, int i) {
	Brand_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Brand(s, p);
}

Brand_Scope_ptr new_Brand_Scope(struct capn_segment *s) {
	Brand_Scope_ptr p;
	p.p = capn_new_struct(s, 16, 1);
	return p;
}
Brand_Scope_list new_Brand_Scope_list(struct capn_segment *s, int len) {
	Brand_Scope_list p;
	p.p = capn_new_list(s, len, 16, 1);
	return p;
}
void read_Brand_Scope(struct Brand_Scope *s, Brand_Scope_ptr p) {
	capn_resolve(&p.p);
	s->scopeId = capn_read64(p.p, 0);
	s->which = (enum Brand_Scope_which)(int) capn_read16(p.p, 8);
	switch (s->which) {
	case Brand_Scope_bind:
		s->bind.p = capn_getp(p.p, 0, 0);
		break;
	default:
		break;
	}
}
void write_Brand_Scope(const struct Brand_Scope *s, Brand_Scope_ptr p) {
	capn_resolve(&p.p);
	capn_write64(p.p, 0, s->scopeId);
	capn_write16(p.p, 8, s->which);
	switch (s->which) {
	case Brand_Scope_bind:
		capn_setp(p.p, 0, s->bind.p);
		break;
	default:
		break;
	}
}
void get_Brand_Scope(struct Brand_Scope *s, Brand_Scope_list l, int i) {
	Brand_Scope_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Brand_Scope(s, p);
}
void set_Brand_Scope(const struct Brand_Scope *s, Brand_Scope_list l, int i) {
	Brand_Scope_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Brand_Scope(s, p);
}

Brand_Binding_ptr new_Brand_Binding(struct capn_segment *s) {
	Brand_Binding_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
Brand_Binding_list new_Brand_Binding_list(struct capn_segment *s, int len) {
	Brand_Binding_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_Brand_Binding(struct Brand_Binding *s, Brand_Binding_ptr p) {
	capn_resolve(&p.p);
	s->which = (enum Brand_Binding_which)(int) capn_read16(p.p, 0);
	switch (s->which) {
	case Brand_Binding_type:
		s->type.p = capn_getp(p.p, 0, 0);
		break;
	default:
		break;
	}
}
void write_Brand_Binding(const struct Brand_Binding *s, Brand_Binding_ptr p) {
	capn_resolve(&p.p);
	capn_write16(p.p, 0, s->which);
	switch (s->which) {
	case Brand_Binding_type:
		capn_setp(p.p, 0, s->type.p);
		break;
	default:
		break;
	}
}
void get_Brand_Binding(struct Brand_Binding *s, Brand_Binding_list l, int i) {
	Brand_Binding_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Brand_Binding(s, p);
}
void set_Brand_Binding(const struct Brand_Binding *s, Brand_Binding_list l, int i) {
	Brand_Binding_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Brand_Binding(s, p);
}

Value_ptr new_Value(struct capn_segment *s) {
	Value_ptr p;
	p.p = capn_new_struct(s, 16, 1);
	return p;
}
Value_list new_Value_list(struct capn_segment *s, int len) {
	Value_list p;
	p.p = capn_new_list(s, len, 16, 1);
	return p;
}
void read_Value(struct Value *s, Value_ptr p) {
	capn_resolve(&p.p);
	s->which = (enum Value_which)(int) capn_read16(p.p, 0);
	switch (s->which) {
	case Value__bool:
		s->_bool = (capn_read8(p.p, 2) & 1) != 0;
		break;
	case Value_int8:
	case Value_uint8:
		s->uint8 = capn_read8(p.p, 2);
		break;
	case Value_int16:
	case Value_uint16:
	case Value__enum:
		s->_enum = capn_read16(p.p, 2);
		break;
	case Value_int32:
	case Value_uint32:
	case Value_float32:
		s->float32 = capn_to_f32(capn_read32(p.p, 4));
		break;
	case Value_int64:
	case Value_uint64:
	case Value_float64:
		s->float64 = capn_to_f64(capn_read64(p.p, 8));
		break;
	case Value_text:
		s->text = capn_get_text(p.p, 0, capn_val0);
		break;
	case Value_data:
		s->data = capn_get_data(p.p, 0);
		break;
	case Value__list:
	case Value__struct:
	case Value_anyPointer:
		s->anyPointer = capn_getp(p.p, 0, 0);
		break;
	default:
		break;
	}
}
void write_Value(const struct Value *s, Value_ptr p) {
	capn_resolve(&p.p);
	capn_write16(p.p, 0, s->which);
	switch (s->which) {
	case Value__bool:
		capn_write1(p.p, 16, s->_bool != 0);
		break;
	case Value_int8:
	case Value_uint8:
		capn_write8(p.p, 2, s->uint8);
		break;
	case Value_int16:
	case Value_uint16:
	case Value__enum:
		capn_write16(p.p, 2, s->_enum);
		break;
	case Value_int32:
	case Value_uint32:
	case Value_float32:
		capn_write32(p.p, 4, capn_from_f32(s->float32));
		break;
	case Value_int64:
	case Value_uint64:
	case Value_float64:
		capn_write64(p.p, 8, capn_from_f64(s->float64));
		break;
	case Value_text:
		capn_set_text(p.p, 0, s->text);
		break;
	case Value_data:
		capn_setp(p.p, 0, s->data.p);
		break;
	case Value__list:
	case Value__struct:
	case Value_anyPointer:
		capn_setp(p.p, 0, s->anyPointer);
		break;
	default:
		break;
	}
}
void get_Value(struct Value *s, Value_list l, int i) {
	Value_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Value(s, p);
}
void set_Value(const struct Value *s, Value_list l, int i) {
	Value_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Value(s, p);
}

Annotation_ptr new_Annotation(struct capn_segment *s) {
	Annotation_ptr p;
	p.p = capn_new_struct(s, 8, 2);
	return p;
}
Annotation_list new_Annotation_list(struct capn_segment *s, int len) {
	Annotation_list p;
	p.p = capn_new_list(s, len, 8, 2);
	return p;
}
void read_Annotation(struct Annotation *s, Annotation_ptr p) {
	capn_resolve(&p.p);
	s->id = capn_read64(p.p, 0);
	s->brand.p = capn_getp(p.p, 1, 0);
	s->value.p = capn_getp(p.p, 0, 0);
}
void write_Annotation(const struct Annotation *s, Annotation_ptr p) {
	capn_resolve(&p.p);
	capn_write64(p.p, 0, s->id);
	capn_setp(p.p, 1, s->brand.p);
	capn_setp(p.p, 0, s->value.p);
}
void get_Annotation(struct Annotation *s, Annotation_list l, int i) {
	Annotation_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Annotation(s, p);
}
void set_Annotation(const struct Annotation *s, Annotation_list l, int i) {
	Annotation_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Annotation(s, p);
}

CodeGeneratorRequest_ptr new_CodeGeneratorRequest(struct capn_segment *s) {
	CodeGeneratorRequest_ptr p;
	p.p = capn_new_struct(s, 0, 2);
	return p;
}
CodeGeneratorRequest_list new_CodeGeneratorRequest_list(struct capn_segment *s, int len) {
	CodeGeneratorRequest_list p;
	p.p = capn_new_list(s, len, 0, 2);
	return p;
}
void read_CodeGeneratorRequest(struct CodeGeneratorRequest *s, CodeGeneratorRequest_ptr p) {
	capn_resolve(&p.p);
	s->nodes.p = capn_getp(p.p, 0, 0);
	s->requestedFiles.p = capn_getp(p.p, 1, 0);
}
void write_CodeGeneratorRequest(const struct CodeGeneratorRequest *s, CodeGeneratorRequest_ptr p) {
	capn_resolve(&p.p);
	capn_setp(p.p, 0, s->nodes.p);
	capn_setp(p.p, 1, s->requestedFiles.p);
}
void get_CodeGeneratorRequest(struct CodeGeneratorRequest *s, CodeGeneratorRequest_list l, int i) {
	CodeGeneratorRequest_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_CodeGeneratorRequest(s, p);
}
void set_CodeGeneratorRequest(const struct CodeGeneratorRequest *s, CodeGeneratorRequest_list l, int i) {
	CodeGeneratorRequest_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_CodeGeneratorRequest(s, p);
}

CodeGeneratorRequest_RequestedFile_ptr new_CodeGeneratorRequest_RequestedFile(struct capn_segment *s) {
	CodeGeneratorRequest_RequestedFile_ptr p;
	p.p = capn_new_struct(s, 8, 2);
	return p;
}
CodeGeneratorRequest_RequestedFile_list new_CodeGeneratorRequest_RequestedFile_list(struct capn_segment *s, int len) {
	CodeGeneratorRequest_RequestedFile_list p;
	p.p = capn_new_list(s, len, 8, 2);
	return p;
}
void read_CodeGeneratorRequest_RequestedFile(struct CodeGeneratorRequest_RequestedFile *s, CodeGeneratorRequest_RequestedFile_ptr p) {
	capn_resolve(&p.p);
	s->id = capn_read64(p.p, 0);
	s->filename = capn_get_text(p.p, 0, capn_val0);
	s->imports.p = capn_getp(p.p, 1, 0);
}
void write_CodeGeneratorRequest_RequestedFile(const struct CodeGeneratorRequest_RequestedFile *s, CodeGeneratorRequest_RequestedFile_ptr p) {
	capn_resolve(&p.p);
	capn_write64(p.p, 0, s->id);
	capn_set_text(p.p, 0, s->filename);
	capn_setp(p.p, 1, s->imports.p);
}
void get_CodeGeneratorRequest_RequestedFile(struct CodeGeneratorRequest_RequestedFile *s, CodeGeneratorRequest_RequestedFile_list l, int i) {
	CodeGeneratorRequest_RequestedFile_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_CodeGeneratorRequest_RequestedFile(s, p);
}
void set_CodeGeneratorRequest_RequestedFile(const struct CodeGeneratorRequest_RequestedFile *s, CodeGeneratorRequest_RequestedFile_list l, int i) {
	CodeGeneratorRequest_RequestedFile_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_CodeGeneratorRequest_RequestedFile(s, p);
}

CodeGeneratorRequest_RequestedFile_Import_ptr new_CodeGeneratorRequest_RequestedFile_Import(struct capn_segment *s) {
	CodeGeneratorRequest_RequestedFile_Import_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
CodeGeneratorRequest_RequestedFile_Import_list new_CodeGeneratorRequest_RequestedFile_Import_list(struct capn_segment *s, int len) {
	CodeGeneratorRequest_RequestedFile_Import_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_CodeGeneratorRequest_RequestedFile_Import(struct CodeGeneratorRequest_RequestedFile_Import *s, CodeGeneratorRequest_RequestedFile_Import_ptr p) {
	capn_resolve(&p.p);
	s->id = capn_read64(p.p, 0);
	s->name = capn_get_text(p.p, 0, capn_val0);
}
void write_CodeGeneratorRequest_RequestedFile_Import(const struct CodeGeneratorRequest_RequestedFile_Import *s, CodeGeneratorRequest_RequestedFile_Import_ptr p) {
	capn_resolve(&p.p);
	capn_write64(p.p, 0, s->id);
	capn_set_text(p.p, 0, s->name);
}
void get_CodeGeneratorRequest_RequestedFile_Import(struct CodeGeneratorRequest_RequestedFile_Import *s, CodeGeneratorRequest_RequestedFile_Import_list l, int i) {
	CodeGeneratorRequest_RequestedFile_Import_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_CodeGeneratorRequest_RequestedFile_Import(s, p);
}
void set_CodeGeneratorRequest_RequestedFile_Import(const struct CodeGeneratorRequest_RequestedFile_Import *s, CodeGeneratorRequest_RequestedFile_Import_list l, int i) {
	CodeGeneratorRequest_RequestedFile_Import_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_CodeGeneratorRequest_RequestedFile_Import(s, p);
}
