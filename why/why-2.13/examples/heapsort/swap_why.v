(* This file was originally generated by why.
   It can be modified; only the generated parts will be overwritten. *)

Require Import Why.
Require Import Omega.

(* Why obligation from file "", line 0, characters 0-0: *)
(*Why goal*) Lemma swap_po_1 : 
  forall (i: Z),
  forall (j: Z),
  forall (t: (array Z)),
  forall (HW_1: (0 <= i /\ i < (array_length t)) /\ 0 <= j /\ j <
                (array_length t)),
  forall (HW_2: 0 <= i /\ i < (array_length t)),
  forall (result: Z),
  forall (HW_3: result = (access t i)),
  forall (HW_4: 0 <= j /\ j < (array_length t)),
  forall (result0: Z),
  forall (HW_5: result0 = (access t j)),
  forall (HW_6: 0 <= i /\ i < (array_length t)),
  forall (t0: (array Z)),
  forall (HW_7: t0 = (update t i result0)),
  0 <= j /\ j < (array_length t0).
Proof.
(* FILL PROOF HERE *)
Save.

(* Why obligation from file "", line 0, characters 0-0: *)
(*Why goal*) Lemma swap_po_2 : 
  forall (i: Z),
  forall (j: Z),
  forall (t: (array Z)),
  forall (HW_1: (0 <= i /\ i < (array_length t)) /\ 0 <= j /\ j <
                (array_length t)),
  forall (HW_2: 0 <= i /\ i < (array_length t)),
  forall (result: Z),
  forall (HW_3: result = (access t i)),
  forall (HW_4: 0 <= j /\ j < (array_length t)),
  forall (result0: Z),
  forall (HW_5: result0 = (access t j)),
  forall (HW_6: 0 <= i /\ i < (array_length t)),
  forall (t0: (array Z)),
  forall (HW_7: t0 = (update t i result0)),
  forall (HW_8: 0 <= j /\ j < (array_length t0)),
  forall (t1: (array Z)),
  forall (HW_9: t1 = (update t0 j result)),
  (exchange t1 t i j).
Proof.
(* FILL PROOF HERE *)
Save.

Proof.
(* FILL PROOF HERE *)
Save.

Proof.
(* FILL PROOF HERE *)
Save.

Proof.
(* FILL PROOF HERE *)
Save.

(*Why*) Parameter swap_valid :
  forall (i: Z), forall (j: Z), forall (t: (array Z)), forall (_: (0 <= i /\
  i < (array_length t)) /\ 0 <= j /\ j < (array_length t)),
  (sig_2 (array Z) unit
   (fun (t0: (array Z)) (result: unit)  => ((exchange t0 t i j)))).
