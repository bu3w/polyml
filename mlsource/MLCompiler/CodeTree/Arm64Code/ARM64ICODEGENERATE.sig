(*
    Copyright David C. J. Matthews 2021

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License version 2.1 as published by the Free Software Foundation.
    
    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.
    
    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*)

signature ARM64ICODEGENERATE =
sig
    type intSet and extendedBasicBlock and regProperty and xReg
    type closureRef
    
    val icodeToArm64Code :
        {
            blocks: extendedBasicBlock vector, allocatedRegisters: xReg vector, functionName: string,
            stackRequired: int, debugSwitches: Universal.universal list, resultClosure: closureRef,
            profileObject: Address.machineWord
        } -> unit
    
    structure Sharing:
    sig
        type intSet             = intSet
        and extendedBasicBlock  = extendedBasicBlock
        and regProperty         = regProperty
        and xReg                = xReg
        and closureRef          = closureRef
    end
end;
