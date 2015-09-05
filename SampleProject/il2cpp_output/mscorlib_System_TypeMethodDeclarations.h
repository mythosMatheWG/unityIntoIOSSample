#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t379;
// System.Type[]
struct TypeU5BU5D_t194;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t380;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t204;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t371;
// System.Object[]
struct ObjectU5BU5D_t202;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_MemberTypes.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_TypeCode.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Type::.ctor()
extern "C" void Type__ctor_m4108 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Type::.cctor()
extern "C" void Type__cctor_m4109 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterName_impl_m4110 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterNameIgnoreCase_impl_m4111 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterAttribute_impl_m4112 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Type::get_Attributes()
extern "C" int32_t Type_get_Attributes_m4113 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_DeclaringType()
extern "C" Type_t * Type_get_DeclaringType_m4114 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_HasElementType()
extern "C" bool Type_get_HasElementType_m4115 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C" bool Type_get_IsAbstract_m4116 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C" bool Type_get_IsArray_m4117 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
extern "C" bool Type_get_IsByRef_m4118 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C" bool Type_get_IsClass_m4119 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsContextful()
extern "C" bool Type_get_IsContextful_m4120 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C" bool Type_get_IsEnum_m4121 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsExplicitLayout()
extern "C" bool Type_get_IsExplicitLayout_m4122 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C" bool Type_get_IsInterface_m4123 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsMarshalByRef()
extern "C" bool Type_get_IsMarshalByRef_m4124 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
extern "C" bool Type_get_IsPointer_m4125 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C" bool Type_get_IsPrimitive_m4126 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C" bool Type_get_IsSealed_m4127 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSerializable()
extern "C" bool Type_get_IsSerializable_m4128 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C" bool Type_get_IsValueType_m4129 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Type::get_MemberType()
extern "C" int32_t Type_get_MemberType_m4130 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_ReflectedType()
extern "C" Type_t * Type_get_ReflectedType_m4131 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
extern "C" RuntimeTypeHandle_t770  Type_get_TypeHandle_m4132 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Object)
extern "C" bool Type_Equals_m4133 (Type_t * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
extern "C" bool Type_Equals_m4134 (Type_t * __this, Type_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
extern "C" bool Type_EqualsInternal_m4135 (Type_t * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
extern "C" Type_t * Type_internal_from_handle_m4136 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Type_internal_from_name_m4137 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
extern "C" Type_t * Type_GetType_m4138 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C" Type_t * Type_GetType_m4139 (Object_t * __this /* static, unused */, String_t* ___typeName, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
extern "C" int32_t Type_GetTypeCodeInternal_m4140 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C" int32_t Type_GetTypeCode_m4141 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" Type_t * Type_GetTypeFromHandle_m1301 (Object_t * __this /* static, unused */, RuntimeTypeHandle_t770  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
extern "C" RuntimeTypeHandle_t770  Type_GetTypeHandle_m4142 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
extern "C" bool Type_type_is_subtype_of_m4143 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, bool ___check_interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
extern "C" bool Type_type_is_assignable_from_m4144 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsSubclassOf(System.Type)
extern "C" bool Type_IsSubclassOf_m4145 (Type_t * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsAssignableFrom(System.Type)
extern "C" bool Type_IsAssignableFrom_m4146 (Type_t * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsInstanceOfType(System.Object)
extern "C" bool Type_IsInstanceOfType_m4147 (Type_t * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Type::GetHashCode()
extern "C" int32_t Type_GetHashCode_m4148 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C" MethodInfo_t * Type_GetMethod_m4149 (Type_t * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C" MethodInfo_t * Type_GetMethod_m4150 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * Type_GetMethod_m4151 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t379 * ___binder, TypeU5BU5D_t194* ___types, ParameterModifierU5BU5D_t380* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * Type_GetMethod_m4152 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t379 * ___binder, int32_t ___callConvention, TypeU5BU5D_t194* ___types, ParameterModifierU5BU5D_t380* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
extern "C" PropertyInfo_t * Type_GetProperty_m4153 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
extern "C" PropertyInfo_t * Type_GetProperty_m4154 (Type_t * __this, String_t* ___name, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
extern "C" PropertyInfo_t * Type_GetProperty_m4155 (Type_t * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t194* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * Type_GetProperty_m4156 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t379 * ___binder, Type_t * ___returnType, TypeU5BU5D_t194* ___types, ParameterModifierU5BU5D_t380* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsArrayImpl(System.Type)
extern "C" bool Type_IsArrayImpl_m4157 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsValueTypeImpl()
extern "C" bool Type_IsValueTypeImpl_m4158 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsContextfulImpl()
extern "C" bool Type_IsContextfulImpl_m4159 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsMarshalByRefImpl()
extern "C" bool Type_IsMarshalByRefImpl_m4160 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C" ConstructorInfo_t204 * Type_GetConstructor_m4161 (Type_t * __this, TypeU5BU5D_t194* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t204 * Type_GetConstructor_m4162 (Type_t * __this, int32_t ___bindingAttr, Binder_t379 * ___binder, TypeU5BU5D_t194* ___types, ParameterModifierU5BU5D_t380* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t204 * Type_GetConstructor_m4163 (Type_t * __this, int32_t ___bindingAttr, Binder_t379 * ___binder, int32_t ___callConvention, TypeU5BU5D_t194* ___types, ParameterModifierU5BU5D_t380* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors()
extern "C" ConstructorInfoU5BU5D_t371* Type_GetConstructors_m4164 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Type::ToString()
extern "C" String_t* Type_ToString_m4165 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
extern "C" bool Type_get_IsSystemType_m4166 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetGenericArguments()
extern "C" TypeU5BU5D_t194* Type_GetGenericArguments_m4167 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_ContainsGenericParameters()
extern "C" bool Type_get_ContainsGenericParameters_m4168 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericTypeDefinition()
extern "C" bool Type_get_IsGenericTypeDefinition_m4169 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition_impl()
extern "C" Type_t * Type_GetGenericTypeDefinition_impl_m4170 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition()
extern "C" Type_t * Type_GetGenericTypeDefinition_m4171 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericType()
extern "C" bool Type_get_IsGenericType_m4172 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
extern "C" Type_t * Type_MakeGenericType_m4173 (Object_t * __this /* static, unused */, Type_t * ___gt, TypeU5BU5D_t194* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type[])
extern "C" Type_t * Type_MakeGenericType_m4174 (Type_t * __this, TypeU5BU5D_t194* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericParameter()
extern "C" bool Type_get_IsGenericParameter_m4175 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNested()
extern "C" bool Type_get_IsNested_m4176 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Type::GetPseudoCustomAttributes()
extern "C" ObjectU5BU5D_t202* Type_GetPseudoCustomAttributes_m4177 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
