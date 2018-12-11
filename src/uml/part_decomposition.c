/**~interaction~
 * PartDecomposition [Class]
 * 
 * Description
 * 
 * A PartDecomposition is a description of the internal Interactions of one Lifeline relative to an Interaction.
 * 
 * Diagrams
 * 
 * Lifelines, Interaction Uses
 * 
 * Generalizations
 * 
 * InteractionUse
 * 
 * Constraints
 * 
 *  commutativity_of_decomposition
 * 
 * Assume that within Interaction X, Lifeline L is of class C and decomposed to D. Assume also that there is
 * within X an InteractionUse (say) U that covers L. According to the constraint above U will have a counterpart
 * CU within D. Within the Interaction referenced by U, L should also be decomposed, and the decomposition
 * should reference CU. (This rule is called commutativity of decomposition.)
 * Cannot be expressed in OCL
 * 
 *  assume
 * 
 * Assume that within Interaction X, Lifeline L is of class C and decomposed to D. Within X there is a sequence
 * of constructs along L (such constructs are CombinedFragments, InteractionUse and (plain)
 * OccurrenceSpecifications). Then a corresponding sequence of constructs must appear within D, matched oneto-
 * one in the same order. i) CombinedFragment covering L are matched with an extra-global
 * CombinedFragment in D. ii) An InteractionUse covering L is matched with a global (i.e., covering all
 * Lifelines) InteractionUse in D. iii) A plain OccurrenceSpecification on L is considered an actualGate that must
 * be matched by a formalGate of D.
 * Cannot be expressed in OCL
 * 
 *  parts_of_internal_structures
 * 
 * PartDecompositions apply only to Parts that are Parts of Internal Structures not to Parts of Collaborations.
 * Cannot be expressed in OCL
**/