/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 1999-2008 Soeren Sonnenburg
 * Copyright (C) 1999-2008 Fraunhofer Institute FIRST and Max-Planck-Society
 */

#ifndef _MULTICLASSSVM_H___
#define _MULTICLASSSVM_H___

#include "lib/common.h"
#include "features/Features.h"
#include "classifier/svm/SVM.h"

class CSVM;

enum EMultiClassSVM
{
	ONE_VS_REST,
	ONE_VS_ONE
};

/** class MultiClassSVM */
class CMultiClassSVM : public CSVM
{
	public:
		/** constructor
		 *
		 * @param type type of MultiClassSVM
		 */
		CMultiClassSVM(EMultiClassSVM type);

		/** constructor
		 *
		 * @param type type of MultiClassSVM
		 * @param C constant C
		 * @param k kernel
		 * @param lab labels
		 */
		CMultiClassSVM(
			EMultiClassSVM type, float64_t C, CKernel* k, CLabels* lab);
		virtual ~CMultiClassSVM();

		/** create multiclass SVM
		 *
		 * @param num_classes number of classes in SVM
		 * @return if creation was successful
		 */
		bool create_multiclass_svm(int32_t num_classes);

		/** set SVM
		 *
		 * @param num number to set
		 * @param svm SVM to set
		 * @return if setting was successful
		 */
		bool set_svm(int32_t num, CSVM* svm);

		/** get SVM
		 *
		 * @param num which SVM to get
		 * @return SVM at number num
		 */
		CSVM* get_svm(int32_t num)
		{
			ASSERT(m_svms && m_num_svms>0);
			ASSERT(num>=0 && num<m_num_svms);
			SG_REF(m_svms[num]);
			return m_svms[num];
		}

		/** get number of SVMs
		 *
		 * @return number of SVMs
		 */
		int32_t inline get_num_svms()
		{
			return m_num_svms;
		}

		/** cleanup SVM */
		void cleanup();

		/** classify all examples
		 *
		 * @param labels resulting labels
		 * @return resulting labels
		 */
		virtual CLabels* classify(CLabels* labels=NULL);

		/** classify one example
		 *
		 * @param num number of example to classify
		 * @return resulting classification
		 */
		virtual float64_t classify_example(int32_t num);

		/** classify one vs rest
		 *
		 * @param labels resulting labels
		 * @return resulting labels
		 */
		CLabels* classify_one_vs_rest(CLabels* labels=NULL);

		/** classify one example one vs rest
		 *
		 * @param num number of example of classify
		 * @return resulting classification
		 */
		float64_t classify_example_one_vs_rest(int32_t num);

		/** classify one vs one
		 *
		 * @param labels resulting labels
		 * @return resulting labels
		 */
		CLabels* classify_one_vs_one(CLabels* labels=NULL);

		/** classify one example one vs one
		 *
		 * @param num number of example of classify
		 * @return resulting classification
		 */
		float64_t classify_example_one_vs_one(int32_t num);

		/** load a Multiclass SVM from file
		 * @param svm_file the file handle
		 */
		bool load(FILE* svm_file);

		/** write a Multiclass SVM to a file
		 * @param svm_file the file handle
		 */
		bool save(FILE* svm_file);

	protected:
		/** type of MultiClassSVM */
		EMultiClassSVM multiclass_type;

		/** number of classes */
		int32_t m_num_classes;
		/** number of SVMs */
		int32_t m_num_svms;
		/** the SVMs */
		CSVM** m_svms;
};
#endif