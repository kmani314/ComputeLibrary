/*
 * Copyright (c) 2017-2019 Arm Limited.
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef ARM_COMPUTE_GCTRANSPOSEKERNEL_H
#define ARM_COMPUTE_GCTRANSPOSEKERNEL_H

#include "arm_compute/core/GLES_COMPUTE/IGCSimple2DKernel.h"

namespace arm_compute
{
class IGCTensor;

/** OpenGL ES kernel which transposes the elements of a matrix.
 *
 * [width, height, batch] -> [height, width, batch]
 *
 */
class GCTransposeKernel : public IGCSimple2DKernel
{
public:
    /** Initialise the kernel's input and output.
     *
     * @param[in]  input  Input tensor. Data types supported: F16/F32
     * @param[out] output Output tensor. Data type supported: Same as @p input
     */
    void configure(const IGCTensor *input, IGCTensor *output);

    // Inherited methods overridden:
    void run(const Window &window) override;
};
}
#endif /* ARM_COMPUTE_GCTRANSPOSEKERNEL_H */
